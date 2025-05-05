@interface PSCapacityBarCategory : NSObject
@property (nonatomic) Q bytes;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor color;
- (void)setColor:;
- (id)identifier;
- (unsigned long long)bytes;
- (void)setTitle:;
- (id)color;
- (id)title;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (void)setBytes:;
- (id)initWithIdentifier:title:color:bytes:;
@end
