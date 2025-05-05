@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage
@property (nonatomic) NSInteger start;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) NSInteger end;
@property (nonatomic) BOOL hasEnd;
+ (id)descriptor;
@end
