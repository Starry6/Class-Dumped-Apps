@interface NEVPNConnectivityManager : NSObject
@property (nonatomic) Q visibilityStyle;
@property (nonatomic) Q connectivityState;
@property (nonatomic) <NEVPNConnectivityManagerDelegate> delegate;
- (void)dealloc;
- (id)toggleVPNConnectivity:;
- (void)sessionStatusDidChange:;
- (void)setDelegate:;
- (unsigned long long)visibilityStyle;
- (void)setConnectivityState:;
- (unsigned long long)connectivityState;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setVisibilityStyle:;
@end
