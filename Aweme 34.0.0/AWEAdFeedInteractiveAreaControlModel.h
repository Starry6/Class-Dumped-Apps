@interface AWEAdFeedInteractiveAreaControlModel : BDXBridgeModel
@property (nonatomic) q type;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL animated;
- (void)setAnimated:;
- (BOOL)animated;
- (long long)type;
- (void)setType:;
- (void)setHidden:;
- (BOOL)hidden;
+ (BOOL)automaticallyDefaultMapping;
@end
