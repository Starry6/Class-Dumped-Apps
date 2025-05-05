@interface IESECImg : GPBMessage
@property (nonatomic) NSMutableArray URLListArray;
@property (nonatomic) Q URLListArray_Count;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger width;
+ (id)descriptor;
@end
