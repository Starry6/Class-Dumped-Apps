@interface MFReformattedAddress : NSObject
@property (nonatomic) NSString localPart;
@property (nonatomic) NSString domainPart;
@property (nonatomic) {_NSRange=QQ} middleTruncationRange;
- (id)localPart;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)description;
- (id)domainPart;
- (double)widthWithFontSize:maximumWidth:options:;
- (id)attributedStringWithFontSize:maximumWidth:options:;
- (id)middleTruncationRange;
- (void)setMiddleTruncationRange:;
@end
