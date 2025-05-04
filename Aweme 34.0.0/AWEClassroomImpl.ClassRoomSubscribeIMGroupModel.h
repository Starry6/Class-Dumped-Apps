@interface AWEClassroomImpl.ClassRoomSubscribeIMGroupModel : MTLModel
@property (nonatomic) NSString reason;
@property (nonatomic) NSString schema;
- (id)schema;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSchema:;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
