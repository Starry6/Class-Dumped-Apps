@interface TRIPBFileDescriptorSet : TRIPBMessage
@property (nonatomic) NSMutableArray fileArray;
@property (nonatomic) Q fileArray_Count;
+ (id)descriptor;
@end
