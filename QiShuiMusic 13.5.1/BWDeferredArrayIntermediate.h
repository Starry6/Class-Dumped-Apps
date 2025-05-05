@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate
@property (nonatomic) NSArray array;
- (void)dealloc;
- (id)array;
- (id)initWithCoder:;
- (int)flush;
- (void)encodeWithCoder:;
- (id)description;
- (id)archive:;
- (int)setURL:prefetchQueue:;
- (int)setArchive:;
- (id)fetchWithCustomClassesAndRetain:err:;
- (id)initWithArray:tag:URL:;
+ (BOOL)supportsSecureCoding;
@end
