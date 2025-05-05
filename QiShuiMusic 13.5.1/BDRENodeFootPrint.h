@interface BDRENodeFootPrint : NSObject
@property (nonatomic) BOOL isVisited;
@property (nonatomic) BOOL calculateRes;
- (BOOL)calculateRes;
- (void)setCalculateRes:;
- (id)init;
- (BOOL)isVisited;
- (void)setIsVisited:;
@end
