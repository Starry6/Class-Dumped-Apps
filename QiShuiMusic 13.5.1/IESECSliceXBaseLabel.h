@interface IESECSliceXBaseLabel : UILabel
@property (nonatomic) IESECSliceXFlex flex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)flex;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)didAddSubview:;
- (id)initWithFrame:;
+ (id)allocWithZone:;
@end
