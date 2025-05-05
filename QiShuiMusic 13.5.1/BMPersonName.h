@interface BMPersonName : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BMNameComponents nameComponents;
- (id)initWithProtoData:;
- (id)nameComponents;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:nameComponents:;
@end
