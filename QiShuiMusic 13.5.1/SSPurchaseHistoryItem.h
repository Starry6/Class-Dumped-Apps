@interface SSPurchaseHistoryItem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (unsigned long long)hash;
- (id)valueForProperty:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setValue:forProperty:;
@end
