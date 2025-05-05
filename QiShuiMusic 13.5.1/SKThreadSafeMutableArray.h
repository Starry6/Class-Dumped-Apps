@interface SKThreadSafeMutableArray : NSObject
@property (nonatomic) NSArray arrayRepresentation;
- (id)arrayRepresentation;
- (id)init;
- (void)removeObjectsInArray:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (id)copyWithZone:;
- (id)initWithNSMutableArray:;
@end
