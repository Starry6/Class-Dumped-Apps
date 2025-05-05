@interface AVTwoPartKeyPath : NSObject
@property (nonatomic) NSString topLevelPropertyKey;
@property (nonatomic) NSString secondLevelPropertyKey;
@property (nonatomic) NSString keyPathString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithTopLevelPropertyKey:secondLevelPropertyKey:;
- (id)secondLevelPropertyKey;
- (id)keyPathString;
- (id)topLevelPropertyKey;
- (id)copyWithZone:;
@end
