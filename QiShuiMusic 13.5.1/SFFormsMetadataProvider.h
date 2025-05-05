@interface SFFormsMetadataProvider : NSObject
@property (nonatomic) Q formCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:;
- (unsigned long long)formCount;
- (id)initWithFrameHandleToFormsDictionary:;
@end
