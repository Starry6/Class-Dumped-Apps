@interface AVCCaptionsToken : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) double confidence;
@property (nonatomic) {_NSRange=QQ} range;
- (double)confidence;
- (void)dealloc;
- (id)range;
- (id)description;
- (id)text;
- (id)initWithText:confidence:range:;
@end
