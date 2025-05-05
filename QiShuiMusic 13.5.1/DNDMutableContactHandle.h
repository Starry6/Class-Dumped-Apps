@interface DNDMutableContactHandle : DNDContactHandle
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) Q type;
@property (nonatomic) NSString value;
- (void)setContactIdentifier:;
- (void)setType:;
- (void)setValue:;
@end
