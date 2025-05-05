@interface SAVCSContentShelfUpdateInfo : AceObject
@property (nonatomic) q pageNumber;
@property (nonatomic) NSString targetShelfViewId;
@property (nonatomic) NSString targetViewId;
@property (nonatomic) NSURL url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)groupIdentifier;
- (void)setUrl:;
- (id)encodedClassName;
- (long long)pageNumber;
- (void)setPageNumber:;
- (id)targetShelfViewId;
- (void)setTargetShelfViewId:;
- (id)targetViewId;
- (void)setTargetViewId:;
+ (id)contentShelfUpdateInfo;
+ (id)contentShelfUpdateInfoWithDictionary:context:;
@end
