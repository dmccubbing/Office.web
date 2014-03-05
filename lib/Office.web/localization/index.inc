<?php

/*
 +-----------------------------------------------------------------------+
 | lib/Office.web/localization/index.inc                                        |
 |                                                                       |
 | This file is part of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2014, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 | PURPOSE:                                                              |
 |   Provide a centralized location table                                |
 |   for keeping track of available languages                            |
 |                                                                       |
 +-----------------------------------------------------------------------+
 | Author: Thomas Bruederli <roundcube@gmail.com>                        |
 +-----------------------------------------------------------------------+
*/

// langage codes according to ISO 639-1
// country codes according to ISO 3166-1 (Alpha-2)
// original names from http://www.mediaglyphs.org/mg/?p=langnames

$rcube_languages = array(
  'sq_AL' => 'Albanian (Shqip)',
  'ar'    => 'Arabic (��������������)',
  'ar_SA' => 'Arabic (Saudi Arabia)',
  'hy_AM' => 'Armenian (��������������)',
  'ast'	  => 'Asturiana (Asturianu)',
  'az_AZ' => 'Azerbaijani (Az��rbaycanca)',
  'eu_ES' => 'Basque (Euskara)',
  'be_BE' => 'Belarusian (�������������������� ��������)',
  'bn_BD' => 'Bengali (���������������)',
  'bs_BA' => 'Bosnian (Bosanski)',
  'br'	  => 'Breton (Brezhoneg)',
  'bg_BG' => 'Bulgarian (������������������)',
  'ca_ES' => 'Catalan (Catal��)',
  'zh_CN' => 'Chinese (������������)',
  'zh_TW' => 'Chinese (������������)',
  'hr_HR' => 'Croatian (Hrvatski)',
  'cs_CZ' => 'Czech (��esky)',
  'da_DK' => 'Danish (Dansk)',
  'fa_AF' => 'Dari (���������)',
  'de_DE' => 'German (Deutsch)',
  'de_CH' => 'German (Schweiz)',
  'nl_NL' => 'Dutch (Nederlands)',
  'en_CA' => 'English (Canada)',
  'en_GB' => 'English (GB)',
  'en_US' => 'English (US)',
  'eo'    => 'Esperanto',
  'et_EE' => 'Estonian (Eesti)',
  'fo_FO' => 'Faroese (F��royskt)',
  'fi_FI' => 'Finnish (Suomi)',
  'nl_BE' => 'Flemish (Vlaams)',
  'fr_FR' => 'French (Fran��ais)',
  'gl_ES' => 'Galician (Galego)',
  'ka_GE' => 'Georgian (���������������������)',
  'el_GR' => 'Greek (����������������)',
  'he_IL' => 'Hebrew (����������)',
  'hi_IN' => 'Hindi (���������������)',
  'hu_HU' => 'Hungarian (Magyar)',
  'is_IS' => 'Icelandic (��slenska)',
  'id_ID' => 'Indonesian (Bahasa Indonesia)',
  'ia'    => 'Interlingua',
  'ga_IE' => 'Irish (Gaedhilge)',
  'it_IT' => 'Italian (Italiano)',
  'ja_JP' => 'Japanese (���������)',
  'km_KH' => 'Khmer (���������������������������)',
  'kn_IN' => 'Konkani (������������������)',
  'ko_KR' => 'Korean (���������)',
  'ku'    => 'Kurdish (Kurmanc��)',
  'lv_LV' => 'Latvian (Latvie��u)',
  'lt_LT' => 'Lithuanian (Lietuvi��kai)',
  'lb_LU' => 'Luxembourgish (L��tzebuergesch)',
  'mk_MK' => 'Macedonian (��������������������)',
  'ms_MY' => 'Malay (Bahasa Melayu)',
  'ml_IN' => 'Malayalam (������������������)',
  'mr_IN' => 'Marathi (���������������)',
  'ne_NP' => 'Nepali (������������������)',
  'nb_NO' => 'Norwegian (Bokm��l)',
  'nn_NO' => 'Norwegian (Nynorsk)',
  'ps' 	  => 'Pashto',
  'fa_IR' => 'Persian (����������)',
  'pl_PL' => 'Polish (Polski)',
  'pt_BR' => 'Portuguese (Brasil)',
  'pt_PT' => 'Portuguese (Portugu��s)',
  'ro_RO' => 'Romanian (Rom��ne��te)',
  'ru_RU' => 'Russian (��������������)',
  'sr_CS' => 'Serbian (������������)',
  'si_LK' => 'Sinhalese (���������������)',
  'sk_SK' => 'Slovak (Sloven��ina)',
  'sl_SI' => 'Slovenian (Sloven����ina)',
  'es_AR' => 'Spanish (Argentina)',
  'es_ES' => 'Spanish (Espa��ol)',
  'es_419' => 'Spanish (Latin America)',
  'sv_SE' => 'Swedish (Svenska)',
  'ta_IN' => 'Tamil (���������������)',
  'ti'    => 'Tigrinya (������������)',
  'th_TH' => 'Thai (���������)',
  'tr_TR' => 'Turkish (T��rk��e)',
  'uk_UA' => 'Ukrainian (��������������������)',
  'ur_PK' => 'Urdu (����������)',
  'vi_VN' => 'Vietnamese (Ti���ng Vi���t)',
  'cy_GB' => 'Welsh (Cymraeg)',
  'fy_NL' => 'West Frisian (Frysk)',
);

$rcube_language_aliases = array(
  'am' => 'hy_AM',
  'az' => 'az_AZ',
  'bg' => 'bg_BG',
  'bs' => 'bs_BA',
  'ca' => 'ca_ES',
  'cn' => 'zh_CN',
  'cs' => 'cs_CZ',
  'cy' => 'cy_GB',
  'cz' => 'cs_CZ',
  'da' => 'da_DK',
  'de' => 'de_DE',
  'ee' => 'et_EE',
  'et' => 'et_EE',
  'el' => 'el_GR',
  'en' => 'en_US',
  'eu' => 'eu_ES',
  'fa' => 'fa_IR',
  'ga' => 'ga_IE',
  'ge' => 'ka_GE',
  'gl' => 'gl_ES',
  'he' => 'he_IL',
  'hi' => 'hi_IN',
  'hr' => 'hr_HR',
  'hy' => 'hy_AM',
  'ja' => 'ja_JP',
  'ka' => 'ka_GE',
  'ko' => 'ko_KR',
  'kr' => 'ko_KR',
  'kh' => 'km_KH',
  'kh_KH' => 'km_KH',
  'kn' => 'kn_IN',
  'km' => 'km_KH',
  'lb' => 'lb_LU',
  'ne' => 'ne_NP',
  'no' => 'nn_NO',
  'ms' => 'ms_MY',
  'mr' => 'mr_IN',
  'ml' => 'ml_IN',
  'ml_ML' => 'ml_IN',
  'pl' => 'pl_PL',
  'tw' => 'zh_TW',
  'si' => 'si_LK',
  'sl' => 'sl_SI',
  'sr' => 'sr_CS',
  'sr_cyrillic' => 'sr_CS',
  'sr_latin' => 'bs_BA',
  'se' => 'sv_SE',
  'sv' => 'sv_SE',
  'sq' => 'sq_AL',
  'uk' => 'uk_UA',
  'vn' => 'vi_VN',
  'vi' => 'vi_VN',
  'zh' => 'zh_CN',
);

?>
