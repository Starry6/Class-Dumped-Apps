@interface AWEIMFansVideoManager : NSObject
@property (nonatomic) NSMutableSet dislikeUserSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)clearUserSet;
- (id)dislikeUserSet;
- (void)fansVideoDislikeSetRemoveUser:;
- (void)fansVideoSetHasDislikeUser:;
- (BOOL)hasDislikeUser:;
- (void)setDislikeUserSet:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
