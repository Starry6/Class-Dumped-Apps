@interface SFPrivacyReportGridRowLayoutInfo : NSObject
@property (nonatomic) q row;
@property (nonatomic) {_NSRange=QQ} itemRange;
@property (nonatomic) double height;
- (long long)row;
- (double)height;
- (void)setHeight:;
- (id)initWithRow:itemRange:;
- (id)itemRange;
@end
