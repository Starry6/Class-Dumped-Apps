@interface BWDeferredIntermediate : NSObject
@property (nonatomic) NSString tag;
@property (nonatomic) NSURL URL;
- (id)tag;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (int)flush;
- (void)encodeWithCoder:;
- (id)URL;
- (id)archive:;
- (id)initWithTag:URL:;
- (int)setURL:prefetchQueue:;
- (id)fetchAndRetain:;
- (id)_shortString;
+ (BOOL)supportsSecureCoding;
@end
