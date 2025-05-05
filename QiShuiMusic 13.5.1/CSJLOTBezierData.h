@interface CSJLOTBezierData : NSObject
@property (nonatomic) q count;
@property (nonatomic) BOOL closed;
- (void)initializeData:;
- (id)_vertexAtIndex:inArray:;
- (id)inTangentAtIndex:;
- (id)outTangentAtIndex:;
- (void)dealloc;
- (id)vertexAtIndex:;
- (id)initWithData:;
- (long long)count;
- (BOOL)closed;
@end
