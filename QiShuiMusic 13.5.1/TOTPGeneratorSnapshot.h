@interface TOTPGeneratorSnapshot : NSObject
@property (nonatomic) NSDate startDateOfInterval;
@property (nonatomic) SFAutoFillOneTimeCode oneTimeCode;
- (void).cxx_destruct;
- (id)oneTimeCode;
- (id)startDateOfInterval;
- (void)setStartDateOfInterval:;
- (void)setOneTimeCode:;
@end
