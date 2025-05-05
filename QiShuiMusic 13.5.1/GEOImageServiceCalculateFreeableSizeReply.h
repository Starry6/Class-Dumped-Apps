@interface GEOImageServiceCalculateFreeableSizeReply : GEOXPCReply
@property (nonatomic) Q size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void)setSize:;
- (unsigned long long)size;
@end
