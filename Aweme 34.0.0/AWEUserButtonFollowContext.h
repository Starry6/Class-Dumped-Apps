@interface AWEUserButtonFollowContext : NSObject
@property (nonatomic) AWEUserRelationContext followContext;
@property (nonatomic) NSString scene;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) NSNumber followSceneID;
@property (nonatomic) NSNumber cancelFollowSceneID;
@property (nonatomic) BOOL enableShowErrorToast;
@property (nonatomic) BOOL enableDoubleCheckAlert;
- (void)setTrackDict:;
- (id)trackDict;
- (void)setFollowContext:;
- (void)setEnableShowErrorToast:;
- (void)setFollowSceneID:;
- (void)setCancelFollowSceneID:;
- (id)followContext;
- (id)followSceneID;
- (id)cancelFollowSceneID;
- (BOOL)enableShowErrorToast;
- (BOOL)enableDoubleCheckAlert;
- (void)setEnableDoubleCheckAlert:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
