@interface AWEIMImageTrackerConfig : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSString targetId;
@property (nonatomic) q avatarType;
@property (nonatomic) q conversationType;
@property (nonatomic) BOOL needTransform;
@property (nonatomic) q resultForLLIAPStrategy;
- (long long)conversationType;
- (void)setConversationType:;
- (BOOL)needTransform;
- (long long)resultForLLIAPStrategy;
- (void)setNeedTransform:;
- (void)setResultForLLIAPStrategy:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)targetId;
- (void)setTargetId:;
- (long long)avatarType;
- (void)setAvatarType:;
@end
