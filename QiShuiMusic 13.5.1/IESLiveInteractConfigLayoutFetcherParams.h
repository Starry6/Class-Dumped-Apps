@interface IESLiveInteractConfigLayoutFetcherParams : NSObject
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) q orientation;
- (void)setUiLayout:;
- (long long)orientation;
- (void)setOrientation:;
- (int)uiLayout;
+ (id)paramsWithUILayout:orientation:;
+ (long long)defaultOrientationForUILayout:;
+ (id)paramsWithUILayout:;
@end
