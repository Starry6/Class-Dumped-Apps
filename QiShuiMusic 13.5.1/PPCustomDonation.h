@interface PPCustomDonation : NSObject
+ (BOOL)donateParsecNamedEntitiesAndTopics:rawQuery:reformulatedQuery:source:error:;
+ (BOOL)donatePhotosLocationNamedEntities:bundleId:error:;
+ (BOOL)donateLabeledStrings:bundleId:groupId:documentId:error:;
+ (BOOL)donateNotification:error:;
+ (BOOL)donatePhotosOneUpLocationNamedEntities:bundleId:error:;
+ (BOOL)donateSiriQuery:results:error:;
+ (BOOL)donatePhotosTopics:bundleId:date:error:;
+ (BOOL)donatePhotosNamedEntities:bundleId:date:error:;
@end
