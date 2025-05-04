@interface AWEHPSkylightFactory : NSObject
+ (id)homepageSkylightWithAccessKey:withUndertakeHost:withCommunicationObject:withHostIdentifier:;
+ (void)p_trackSkylightCreate:withErrorMessage:withAccessApproachIdentifier:withUndertakeHostIdentifier:;
+ (BOOL)p_filterBlackListIfNeed:;
+ (id)registerAccessTypeAndClassDictionary;
@end
