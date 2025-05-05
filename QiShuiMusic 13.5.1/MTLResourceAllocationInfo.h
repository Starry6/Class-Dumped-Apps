@interface MTLResourceAllocationInfo : NSObject
@property (nonatomic) NSString memoryPool;
@property (nonatomic) Q virtualSize;
@property (nonatomic) Q residentSize;
@property (nonatomic) Q dirtySize;
@property (nonatomic) BOOL pageoffRequired;
@property (nonatomic) BOOL purgeable;
@property (nonatomic) Q uniqueIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
@end
