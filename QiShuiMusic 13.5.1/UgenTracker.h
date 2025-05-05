@interface UgenTracker : NSObject
@property (nonatomic) UgenError error;
@property (nonatomic) UgenWidget curWidget;
@property (nonatomic) double curTimeStamp;
- (double)curTimeStamp;
- (id)curWidget;
- (void)setCurTimeStamp:;
- (void)setCurWidget:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
