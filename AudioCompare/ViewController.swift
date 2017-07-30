//
//  ViewController.swift
//  AudioCompare
//
//  Created by Trevor LeVieux on 5/22/17.
//  Copyright © 2017 LeVieux. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }

    @IBAction func next(sender: AnyObject) {
        
        self.performSegue(withIdentifier: "segue_tabview", sender: nil)
    }
}

