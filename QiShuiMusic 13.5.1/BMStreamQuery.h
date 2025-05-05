@interface BMStreamQuery : NSObject
@property (nonatomic) <BMStream> stream;
@property (nonatomic) NSDateInterval interval;
@property (nonatomic) q origin;
- (id)stream;
- (id)init;
- (long long)origin;
- (void).cxx_destruct;
- (id)interval;
- (id)initWithStream:interval:origin:;
+ (id)new;
+ (id)publisherForStream:interval:origin:;
+ (id)publisherForStream:interval:;
@end
