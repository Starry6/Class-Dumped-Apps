@interface CalConferenceURLDetector : NSObject
+ (id)logHandle;
+ (id)conferenceURLFromSources:;
+ (id)googleMeetURLsAndPhoneNumbersFromSource:;
+ (id)_linksInSource:;
+ (id)_URLsInSource:;
+ (id)_firstPhoneNumberInSource:;
+ (BOOL)isPreferredURL:;
+ (BOOL)isTUConversationLink:;
+ (BOOL)_isGoogleMeetURL:;
+ (BOOL)_isValidTelURL:;
+ (BOOL)_hasValidPath:;
+ (BOOL)_hasDisallowedPathExtension:;
+ (id)_googleMeetSuffix;
+ (id)_preferredHostSuffixes;
+ (id)_dataDetector;
+ (id)_URLDataDetector;
+ (id)_phoneNumberDataDetector;
@end
