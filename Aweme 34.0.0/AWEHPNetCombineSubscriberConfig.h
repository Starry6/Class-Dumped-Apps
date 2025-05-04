@interface AWEHPNetCombineSubscriberConfig : NSObject
@property (nonatomic) NSString businessID;
@property (nonatomic) <AWEHPNetCombineSubscriberProtocol> subscriber;
- (BOOL)isValidWithError:;
- (id)subscriber;
- (id)businessID;
- (void)setSubscriber:;
- (void)setBusinessID:;
- (id)description;
- (void).cxx_destruct;
@end
