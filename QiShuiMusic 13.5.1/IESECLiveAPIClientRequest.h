@interface IESECLiveAPIClientRequest : NSObject
@property (nonatomic) NSString baseURLStr;
@property (nonatomic) NSString path;
@property (nonatomic) BOOL postMethod;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) # modelClass;
- (id)baseURLStr;
- (BOOL)isInAnchorAPIList:;
- (BOOL)isPathInCheckLoginList;
- (BOOL)postMethod;
- (void)setBaseURLStr:;
- (void)setPostMethod:;
- (id)path;
- (void)setPath:;
- (Class)modelClass;
- (id)parameters;
- (void)setModelClass:;
- (void).cxx_destruct;
- (void)setParameters:;
@end
