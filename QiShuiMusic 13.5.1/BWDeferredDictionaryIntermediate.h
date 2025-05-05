@interface BWDeferredDictionaryIntermediate : BWDeferredDataIntermediate
@property (nonatomic) NSDictionary dictionary;
- (id)dictionary;
- (void)dealloc;
- (id)initWithCoder:;
- (int)flush;
- (void)encodeWithCoder:;
- (id)description;
- (id)archive:;
- (int)setURL:prefetchQueue:;
- (int)setArchive:;
- (id)fetchWithCustomClassesAndRetain:err:;
- (id)initWithDictionary:tag:URL:;
+ (BOOL)supportsSecureCoding;
@end
