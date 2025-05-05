@interface BMPersonalFact : NSObject
@property (nonatomic) NSString subjectId;
@property (nonatomic) NSString subjectAlias;
@property (nonatomic) NSArray subjectIsa;
@property (nonatomic) NSString predicateId;
@property (nonatomic) NSString objectId;
@property (nonatomic) NSString objectAlias;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithProto:;
- (id)objectId;
- (void).cxx_destruct;
- (id)initWithSubjectId:subjectAlias:subjectIsa:predicateId:objectId:objectAlias:;
- (id)subjectId;
- (id)subjectAlias;
- (id)subjectIsa;
- (id)predicateId;
- (id)objectAlias;
@end
