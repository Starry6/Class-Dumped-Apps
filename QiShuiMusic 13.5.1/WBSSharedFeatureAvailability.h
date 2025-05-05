@interface WBSSharedFeatureAvailability : NSObject
+ (BOOL)areSiriSearchSuggestionsEnabled;
+ (BOOL)areLocalSiriSuggestionsEnabled;
+ (void)setLocalSiriSuggestionsEnabled:;
+ (id)safariApplicationPlatformBundleIdentifier;
@end
