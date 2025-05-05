@interface CADisplayPixelConstraints : NSObject
@property (nonatomic) r^f nitsTable;
@property (nonatomic) r^f averagePixelTable;
@property (nonatomic) Q tableSize;
@property (nonatomic) r^f rgbWeights;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)nitsTable;
- (id)averagePixelTable;
- (unsigned long long)tableSize;
- (id)rgbWeights;
- (id)initWithConstraints:;
@end
