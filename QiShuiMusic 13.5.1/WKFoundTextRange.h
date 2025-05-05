@interface WKFoundTextRange : UITextRange
@property (nonatomic) Q location;
@property (nonatomic) Q length;
@property (nonatomic) NSString frameIdentifier;
@property (nonatomic) Q order;
- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (unsigned long long)order;
- (unsigned long long)location;
- (void)setLocation:;
- (unsigned long long)length;
- (void)setOrder:;
- (void)setLength:;
- (id)webFoundTextRange;
- (id)frameIdentifier;
- (void)setFrameIdentifier:;
+ (id)foundTextRangeWithWebFoundTextRange:;
@end
