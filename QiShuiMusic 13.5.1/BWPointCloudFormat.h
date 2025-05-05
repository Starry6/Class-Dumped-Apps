@interface BWPointCloudFormat : BWFormat
@property (nonatomic) Q maxPoints;
@property (nonatomic) Q dataBufferSize;
@property (nonatomic) I dataFormat;
@property (nonatomic) NSDictionary dataBufferAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)mediaType;
- (id)formatDescription;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)dataBufferSize;
- (unsigned long long)maxPoints;
- (id)description;
- (id)dataBufferAttributes;
- (unsigned int)dataFormat;
+ (id)formatByResolvingRequirements:printErrors:;
+ (id)formatByResolvingRequirements:;
@end
