@interface AWENetworkQuailityManager : NSObject
@property (nonatomic) AWENetworkQuailtyModel currentNqeStatues;
@property (nonatomic) <AWENetworkQuailityDelegate> delegate;
- (void)startNotify;
- (void)endNotify;
- (id)currentNqeStatues;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
