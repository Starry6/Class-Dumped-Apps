@interface PuzzleServiceCenter : PuzzleBeanFactory
- (BOOL)bindObject:forProtocol:context:;
- (BOOL)bindClass:forProtocol:context:;
- (id)prototypeObjectWithProtocol:context:;
+ (id)sharedCenter;
@end
