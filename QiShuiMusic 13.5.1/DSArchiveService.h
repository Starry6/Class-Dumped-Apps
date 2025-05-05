@interface DSArchiveService : NSObject
@property (nonatomic) <DSArchiveServiceUnarchivingDelegate> unarchivingDelegate;
- (void).cxx_destruct;
- (void)setUnarchivingDelegate:;
- (id)unarchiveItemAtURL:passphrase:destinationFolderURL:completionHandler:;
- (id)archiveItemsWithURLs:compressionFormat:destinationFolderURL:completionHandler:;
- (void)receiveArchivedItemsDescriptors:;
- (void)itemDescriptorsForItemAtURL:passphrase:completionHandler:;
- (void)itemDescriptorsForItemAtURL:passphrases:completionHandler:;
- (id)archiveItemsWithURLs:passphrase:addToKeychain:compressionFormat:destinationFolderURL:completionHandler:;
- (id)unarchiveItemAtURL:passphrases:destinationFolderURL:completionHandler:;
- (id)unarchiveItemAtURL:passphrases:destinationFolderURL:acceptedFormats:completionHandler:;
- (id)unarchiveItemAtURL:passphrases:addToKeychain:destinationFolderURL:acceptedFormats:completionHandler:;
- (id)unarchivingDelegate;
@end
