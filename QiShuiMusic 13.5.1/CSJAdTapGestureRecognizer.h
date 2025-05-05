@interface CSJAdTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) CSJDynamicClickInfo clickInfo;
- (id)clickInfo;
- (void)setClickInfo:;
- (void)touchesBegan:withEvent:;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
