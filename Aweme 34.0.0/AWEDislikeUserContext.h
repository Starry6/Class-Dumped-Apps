@interface AWEDislikeUserContext : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) BOOL sendsNotification;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (BOOL)sendsNotification;
- (void)setSendsNotification:;
- (id)userID;
- (id)init;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)instanceWithBlock:;
@end
