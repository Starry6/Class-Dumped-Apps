@interface BPSSequence : BMBookmarkablePublisher
@property (nonatomic) NSEnumerator enumerator;
- (id)init;
- (id)enumerator;
- (void)subscribe:;
- (id)initWithSequence:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (void)setEnumerator:;
- (id)initWithEnumerator:;
+ (id)new;
@end
