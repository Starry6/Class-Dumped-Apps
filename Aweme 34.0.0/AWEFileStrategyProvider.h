@interface AWEFileStrategyProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filePath;
- (long long)priority;
- (id)strategies;
@end
