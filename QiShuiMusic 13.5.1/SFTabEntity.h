@interface SFTabEntity : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString title;
@property (nonatomic) NSString address;
- (id)uuid;
- (id)title;
- (void).cxx_destruct;
- (id)address;
- (id)initWithUUID:title:address:;
@end
