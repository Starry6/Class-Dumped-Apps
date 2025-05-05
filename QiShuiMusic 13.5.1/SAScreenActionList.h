@interface SAScreenActionList : SAAbstractItemList
@property (nonatomic) NSString appId;
@property (nonatomic) NSString mainEntitySemanticData;
@property (nonatomic) NSURL viewId;
- (id)groupIdentifier;
- (id)appId;
- (void)setAppId:;
- (id)encodedClassName;
- (id)viewId;
- (id)mainEntitySemanticData;
- (void)setMainEntitySemanticData:;
- (void)setViewId:;
+ (id)list;
+ (id)listWithDictionary:context:;
@end
