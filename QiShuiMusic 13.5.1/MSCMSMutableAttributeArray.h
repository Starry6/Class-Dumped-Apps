@interface MSCMSMutableAttributeArray : NSMutableArray
@property (nonatomic) NSMutableArray attributes;
@property (nonatomic) NSMutableArray genericAttributes;
@property (nonatomic) NSData encodedAttributeSet;
- (void)removeAttributes:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (void)setAttributes:;
- (id)attributes;
- (void)removeLastObject;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)count;
- (id)initWithCapacity:;
- (id)getAttributesWithType:;
- (id)encodeAttributesWithError:;
- (id)encodeImplicitAttributesWithError:;
- (id)calculateAttributesWithDigest:error:;
- (id)genericAttributes;
- (void)setGenericAttributes:;
- (id)encodedAttributeSet;
- (void)setEncodedAttributeSet:;
+ (id)createAttributeArrayFromAttributeSetRaw:error:;
@end
