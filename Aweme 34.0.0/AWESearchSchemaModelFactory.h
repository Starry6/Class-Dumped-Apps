@interface AWESearchSchemaModelFactory : NSObject
+ (id)createSchemaModelAndTrackWithDict:;
+ (id)createSchemaModelWithDict:needTrack:;
+ (void)fetchSearchSchemaRegisterKeys;
+ (id)getRegisterKeys;
+ (void)trackErrorWithType:keys:model:;
+ (void)trackParamsWith:model:;
+ (id)createSchemaModelWithDict:;
@end
