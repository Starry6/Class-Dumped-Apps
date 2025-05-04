@interface AWEIMShareGameUtility : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showShareGameWithMessage:;
+ (void)preloadSchemaWithMessage:;
+ (id)schemaFromMessage:;
+ (id)__generateExternalParams:;
+ (id)sharedInstance;
@end
