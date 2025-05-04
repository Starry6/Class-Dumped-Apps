@interface AWEPOIAnchorTempoManager : NSObject
@property (nonatomic) _TtC8TempoiOS11TempoEngine engine;
@property (nonatomic) UIView oldRootView;
@property (nonatomic) <AWEPOIAnchorTempoManagerDelegate> delegate;
- (void)loadTempoTemplate:uniqueID:data:constrainedSize:completion:;
- (id)oldRootView;
- (void)setOldRootView:;
- (id)init;
- (id)engine;
- (id)delegate;
- (void)setEngine:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupEngine;
@end
