@interface IESECOnceHelper : NSObject
@property (nonatomic) NSMutableSet onceSet;
@property (nonatomic) NSSet identifiers;
- (id)onceSet;
- (void)setOnceSet:;
- (id)init;
- (id)identifiers;
- (void)remove:;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)contains:;
- (void)visit:;
@end
